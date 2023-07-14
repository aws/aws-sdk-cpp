﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API AssociateTrialComponentResult
  {
  public:
    AssociateTrialComponentResult();
    AssociateTrialComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateTrialComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArn = value; }

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArn = std::move(value); }

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArn.assign(value); }

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline AssociateTrialComponentResult& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline AssociateTrialComponentResult& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trial component.</p>
     */
    inline AssociateTrialComponentResult& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const Aws::String& value) { m_trialArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(Aws::String&& value) { m_trialArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const char* value) { m_trialArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline AssociateTrialComponentResult& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline AssociateTrialComponentResult& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline AssociateTrialComponentResult& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}

  private:

    Aws::String m_trialComponentArn;

    Aws::String m_trialArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
