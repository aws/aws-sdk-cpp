/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/QueueAttributeName.h>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API GetQueueAttributesRequest : public SQSRequest
  {
  public:
    GetQueueAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon SQS queue to take action on.</p>
     */
    inline GetQueueAttributesRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline GetQueueAttributesRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>A list of attributes to retrieve information for. </p>
     */
    inline GetQueueAttributesRequest& AddAttributeNames(QueueAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:
    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet;
    Aws::Vector<QueueAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
