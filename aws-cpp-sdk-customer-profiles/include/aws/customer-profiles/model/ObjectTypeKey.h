/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/StandardIdentifier.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>An object that defines the Key element of a ProfileObject. A Key is a special
   * element that can be used to search for a customer profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ObjectTypeKey">AWS
   * API Reference</a></p>
   */
  class ObjectTypeKey
  {
  public:
    AWS_CUSTOMERPROFILES_API ObjectTypeKey();
    AWS_CUSTOMERPROFILES_API ObjectTypeKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ObjectTypeKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline const Aws::Vector<StandardIdentifier>& GetStandardIdentifiers() const{ return m_standardIdentifiers; }

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline bool StandardIdentifiersHasBeenSet() const { return m_standardIdentifiersHasBeenSet; }

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline void SetStandardIdentifiers(const Aws::Vector<StandardIdentifier>& value) { m_standardIdentifiersHasBeenSet = true; m_standardIdentifiers = value; }

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline void SetStandardIdentifiers(Aws::Vector<StandardIdentifier>&& value) { m_standardIdentifiersHasBeenSet = true; m_standardIdentifiers = std::move(value); }

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline ObjectTypeKey& WithStandardIdentifiers(const Aws::Vector<StandardIdentifier>& value) { SetStandardIdentifiers(value); return *this;}

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline ObjectTypeKey& WithStandardIdentifiers(Aws::Vector<StandardIdentifier>&& value) { SetStandardIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline ObjectTypeKey& AddStandardIdentifiers(const StandardIdentifier& value) { m_standardIdentifiersHasBeenSet = true; m_standardIdentifiers.push_back(value); return *this; }

    /**
     * <p>The types of keys that a ProfileObject can have. Each ProfileObject can have
     * only 1 UNIQUE key but multiple PROFILE keys. PROFILE, ASSET, CASE, or ORDER
     * means that this key can be used to tie an object to a PROFILE, ASSET, CASE, or
     * ORDER respectively. UNIQUE means that it can be used to uniquely identify an
     * object. If a key a is marked as SECONDARY, it will be used to search for
     * profiles after all other PROFILE keys have been searched. A LOOKUP_ONLY key is
     * only used to match a profile but is not persisted to be used for searching of
     * the profile. A NEW_ONLY key is only used if the profile does not already exist
     * before the object is ingested, otherwise it is only used for matching objects to
     * profiles.</p>
     */
    inline ObjectTypeKey& AddStandardIdentifiers(StandardIdentifier&& value) { m_standardIdentifiersHasBeenSet = true; m_standardIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldNames() const{ return m_fieldNames; }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline bool FieldNamesHasBeenSet() const { return m_fieldNamesHasBeenSet; }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline void SetFieldNames(const Aws::Vector<Aws::String>& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = value; }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline void SetFieldNames(Aws::Vector<Aws::String>&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames = std::move(value); }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline ObjectTypeKey& WithFieldNames(const Aws::Vector<Aws::String>& value) { SetFieldNames(value); return *this;}

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline ObjectTypeKey& WithFieldNames(Aws::Vector<Aws::String>&& value) { SetFieldNames(std::move(value)); return *this;}

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline ObjectTypeKey& AddFieldNames(const Aws::String& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline ObjectTypeKey& AddFieldNames(Aws::String&& value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The reference for the key name of the fields map.</p>
     */
    inline ObjectTypeKey& AddFieldNames(const char* value) { m_fieldNamesHasBeenSet = true; m_fieldNames.push_back(value); return *this; }

  private:

    Aws::Vector<StandardIdentifier> m_standardIdentifiers;
    bool m_standardIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldNames;
    bool m_fieldNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
