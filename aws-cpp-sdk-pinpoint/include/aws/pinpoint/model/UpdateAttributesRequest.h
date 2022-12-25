/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies one or more attributes to remove from all the endpoints that are
   * associated with an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/UpdateAttributesRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAttributesRequest
  {
  public:
    AWS_PINPOINT_API UpdateAttributesRequest();
    AWS_PINPOINT_API UpdateAttributesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API UpdateAttributesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlacklist() const{ return m_blacklist; }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline bool BlacklistHasBeenSet() const { return m_blacklistHasBeenSet; }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline void SetBlacklist(const Aws::Vector<Aws::String>& value) { m_blacklistHasBeenSet = true; m_blacklist = value; }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline void SetBlacklist(Aws::Vector<Aws::String>&& value) { m_blacklistHasBeenSet = true; m_blacklist = std::move(value); }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline UpdateAttributesRequest& WithBlacklist(const Aws::Vector<Aws::String>& value) { SetBlacklist(value); return *this;}

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline UpdateAttributesRequest& WithBlacklist(Aws::Vector<Aws::String>&& value) { SetBlacklist(std::move(value)); return *this;}

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline UpdateAttributesRequest& AddBlacklist(const Aws::String& value) { m_blacklistHasBeenSet = true; m_blacklist.push_back(value); return *this; }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline UpdateAttributesRequest& AddBlacklist(Aws::String&& value) { m_blacklistHasBeenSet = true; m_blacklist.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the attributes to remove from all the endpoints that are
     * associated with the application. The array can specify the complete, exact name
     * of each attribute to remove or it can specify a glob pattern that an attribute
     * name must match in order for the attribute to be removed.</p>
     */
    inline UpdateAttributesRequest& AddBlacklist(const char* value) { m_blacklistHasBeenSet = true; m_blacklist.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_blacklist;
    bool m_blacklistHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
