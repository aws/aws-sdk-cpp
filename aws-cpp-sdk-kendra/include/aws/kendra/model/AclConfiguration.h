/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the column that should be used for filtering the
   * query response by groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AclConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API AclConfiguration
  {
  public:
    AclConfiguration();
    AclConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AclConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline const Aws::String& GetAllowedGroupsColumnName() const{ return m_allowedGroupsColumnName; }

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline bool AllowedGroupsColumnNameHasBeenSet() const { return m_allowedGroupsColumnNameHasBeenSet; }

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline void SetAllowedGroupsColumnName(const Aws::String& value) { m_allowedGroupsColumnNameHasBeenSet = true; m_allowedGroupsColumnName = value; }

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline void SetAllowedGroupsColumnName(Aws::String&& value) { m_allowedGroupsColumnNameHasBeenSet = true; m_allowedGroupsColumnName = std::move(value); }

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline void SetAllowedGroupsColumnName(const char* value) { m_allowedGroupsColumnNameHasBeenSet = true; m_allowedGroupsColumnName.assign(value); }

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline AclConfiguration& WithAllowedGroupsColumnName(const Aws::String& value) { SetAllowedGroupsColumnName(value); return *this;}

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline AclConfiguration& WithAllowedGroupsColumnName(Aws::String&& value) { SetAllowedGroupsColumnName(std::move(value)); return *this;}

    /**
     * <p>A list of groups, separated by semi-colons, that filters a query response
     * based on user context. The document is only returned to users that are in one of
     * the groups specified in the <code>UserContext</code> field of the <a>Query</a>
     * operation.</p>
     */
    inline AclConfiguration& WithAllowedGroupsColumnName(const char* value) { SetAllowedGroupsColumnName(value); return *this;}

  private:

    Aws::String m_allowedGroupsColumnName;
    bool m_allowedGroupsColumnNameHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
