/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/ApiKeyRestrictions.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>An API key resource listed in your Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListKeysResponseEntry">AWS
   * API Reference</a></p>
   */
  class ListKeysResponseEntry
  {
  public:
    AWS_LOCATIONSERVICE_API ListKeysResponseEntry();
    AWS_LOCATIONSERVICE_API ListKeysResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ListKeysResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the API key resource.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline ListKeysResponseEntry& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline ListKeysResponseEntry& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline ListKeysResponseEntry& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the API key resource will expire, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const{ return m_expireTime; }
    inline bool ExpireTimeHasBeenSet() const { return m_expireTimeHasBeenSet; }
    inline void SetExpireTime(const Aws::Utils::DateTime& value) { m_expireTimeHasBeenSet = true; m_expireTime = value; }
    inline void SetExpireTime(Aws::Utils::DateTime&& value) { m_expireTimeHasBeenSet = true; m_expireTime = std::move(value); }
    inline ListKeysResponseEntry& WithExpireTime(const Aws::Utils::DateTime& value) { SetExpireTime(value); return *this;}
    inline ListKeysResponseEntry& WithExpireTime(Aws::Utils::DateTime&& value) { SetExpireTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ListKeysResponseEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ListKeysResponseEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ListKeysResponseEntry& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const ApiKeyRestrictions& GetRestrictions() const{ return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    inline void SetRestrictions(const ApiKeyRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }
    inline void SetRestrictions(ApiKeyRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }
    inline ListKeysResponseEntry& WithRestrictions(const ApiKeyRestrictions& value) { SetRestrictions(value); return *this;}
    inline ListKeysResponseEntry& WithRestrictions(ApiKeyRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the API key was created, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ListKeysResponseEntry& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ListKeysResponseEntry& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the API key was last updated, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ListKeysResponseEntry& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ListKeysResponseEntry& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Utils::DateTime m_expireTime;
    bool m_expireTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApiKeyRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
