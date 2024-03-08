/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details about a project member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Member">AWS API
   * Reference</a></p>
   */
  class Member
  {
  public:
    AWS_DATAZONE_API Member();
    AWS_DATAZONE_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline Member& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline Member& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the group of a project member.</p>
     */
    inline Member& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    /**
     * <p>The user ID of a project member.</p>
     */
    inline const Aws::String& GetUserIdentifier() const{ return m_userIdentifier; }

    /**
     * <p>The user ID of a project member.</p>
     */
    inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }

    /**
     * <p>The user ID of a project member.</p>
     */
    inline void SetUserIdentifier(const Aws::String& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = value; }

    /**
     * <p>The user ID of a project member.</p>
     */
    inline void SetUserIdentifier(Aws::String&& value) { m_userIdentifierHasBeenSet = true; m_userIdentifier = std::move(value); }

    /**
     * <p>The user ID of a project member.</p>
     */
    inline void SetUserIdentifier(const char* value) { m_userIdentifierHasBeenSet = true; m_userIdentifier.assign(value); }

    /**
     * <p>The user ID of a project member.</p>
     */
    inline Member& WithUserIdentifier(const Aws::String& value) { SetUserIdentifier(value); return *this;}

    /**
     * <p>The user ID of a project member.</p>
     */
    inline Member& WithUserIdentifier(Aws::String&& value) { SetUserIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user ID of a project member.</p>
     */
    inline Member& WithUserIdentifier(const char* value) { SetUserIdentifier(value); return *this;}

  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_userIdentifier;
    bool m_userIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
