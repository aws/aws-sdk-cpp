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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeDestinationsRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeDestinationsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline const Aws::String& GetDestinationNamePrefix() const{ return m_destinationNamePrefix; }

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline void SetDestinationNamePrefix(const Aws::String& value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix = value; }

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline void SetDestinationNamePrefix(Aws::String&& value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix = value; }

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline void SetDestinationNamePrefix(const char* value) { m_destinationNamePrefixHasBeenSet = true; m_destinationNamePrefix.assign(value); }

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(const Aws::String& value) { SetDestinationNamePrefix(value); return *this;}

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(Aws::String&& value) { SetDestinationNamePrefix(value); return *this;}

    /**
     * <p>Will only return destinations that match the provided destinationNamePrefix.
     * If you don't specify a value, no prefix is applied.</p>
     */
    inline DescribeDestinationsRequest& WithDestinationNamePrefix(const char* value) { SetDestinationNamePrefix(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeDestinationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDestinationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeDestinationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline long GetLimit() const{ return m_limit; }

    
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline DescribeDestinationsRequest& WithLimit(long value) { SetLimit(value); return *this;}

  private:
    Aws::String m_destinationNamePrefix;
    bool m_destinationNamePrefixHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
