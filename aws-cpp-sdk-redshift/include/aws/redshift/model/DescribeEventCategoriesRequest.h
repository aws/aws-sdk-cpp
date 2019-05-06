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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEventCategoriesMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeEventCategoriesRequest : public RedshiftRequest
  {
  public:
    DescribeEventCategoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventCategories"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
