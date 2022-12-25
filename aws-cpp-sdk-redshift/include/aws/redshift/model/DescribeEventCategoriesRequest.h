/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEventCategoriesRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeEventCategoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventCategories"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, cluster-security-group, and scheduled-action.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
