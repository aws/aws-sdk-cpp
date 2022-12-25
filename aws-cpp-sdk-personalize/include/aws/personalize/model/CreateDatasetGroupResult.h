/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/Domain.h>
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
namespace Personalize
{
namespace Model
{
  class CreateDatasetGroupResult
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetGroupResult();
    AWS_PERSONALIZE_API CreateDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline CreateDatasetGroupResult& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline CreateDatasetGroupResult& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new dataset group.</p>
     */
    inline CreateDatasetGroupResult& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The domain for the new Domain dataset group.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain for the new Domain dataset group.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>The domain for the new Domain dataset group.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>The domain for the new Domain dataset group.</p>
     */
    inline CreateDatasetGroupResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain for the new Domain dataset group.</p>
     */
    inline CreateDatasetGroupResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Aws::String m_datasetGroupArn;

    Domain m_domain;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
