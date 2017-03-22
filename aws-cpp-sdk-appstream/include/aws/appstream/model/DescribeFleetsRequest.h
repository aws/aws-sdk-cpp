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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API DescribeFleetsRequest : public AppStreamRequest
  {
  public:
    DescribeFleetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline DescribeFleetsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline DescribeFleetsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(value); return *this;}

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline DescribeFleetsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline DescribeFleetsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The fleet names to describe. Use null to describe all the fleets for the AWS
     * account.</p>
     */
    inline DescribeFleetsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
