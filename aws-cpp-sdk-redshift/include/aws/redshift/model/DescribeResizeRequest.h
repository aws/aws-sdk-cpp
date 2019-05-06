/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeResizeMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeResizeRequest : public RedshiftRequest
  {
  public:
    DescribeResizeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResize"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline DescribeResizeRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline DescribeResizeRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a cluster whose resize progress you are requesting.
     * This parameter is case-sensitive.</p> <p>By default, resize operations for all
     * clusters defined for an AWS account are returned.</p>
     */
    inline DescribeResizeRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
