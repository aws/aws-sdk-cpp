/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/HybridJobAdditionalAttributeName.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Braket
{
namespace Model
{

  /**
   */
  class GetJobRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;

    AWS_BRAKET_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline const Aws::Vector<HybridJobAdditionalAttributeName>& GetAdditionalAttributeNames() const{ return m_additionalAttributeNames; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline bool AdditionalAttributeNamesHasBeenSet() const { return m_additionalAttributeNamesHasBeenSet; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline void SetAdditionalAttributeNames(const Aws::Vector<HybridJobAdditionalAttributeName>& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = value; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline void SetAdditionalAttributeNames(Aws::Vector<HybridJobAdditionalAttributeName>&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames = std::move(value); }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetJobRequest& WithAdditionalAttributeNames(const Aws::Vector<HybridJobAdditionalAttributeName>& value) { SetAdditionalAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetJobRequest& WithAdditionalAttributeNames(Aws::Vector<HybridJobAdditionalAttributeName>&& value) { SetAdditionalAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetJobRequest& AddAdditionalAttributeNames(const HybridJobAdditionalAttributeName& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes to return information for.</p>
     */
    inline GetJobRequest& AddAdditionalAttributeNames(HybridJobAdditionalAttributeName&& value) { m_additionalAttributeNamesHasBeenSet = true; m_additionalAttributeNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(const char* value) { SetJobArn(value); return *this;}

  private:

    Aws::Vector<HybridJobAdditionalAttributeName> m_additionalAttributeNames;
    bool m_additionalAttributeNamesHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
