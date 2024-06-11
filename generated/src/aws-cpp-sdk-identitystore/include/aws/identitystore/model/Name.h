﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>The full name of the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Name">AWS
   * API Reference</a></p>
   */
  class Name
  {
  public:
    AWS_IDENTITYSTORE_API Name();
    AWS_IDENTITYSTORE_API Name(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Name& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing a formatted version of the name for display.</p>
     */
    inline const Aws::String& GetFormatted() const{ return m_formatted; }
    inline bool FormattedHasBeenSet() const { return m_formattedHasBeenSet; }
    inline void SetFormatted(const Aws::String& value) { m_formattedHasBeenSet = true; m_formatted = value; }
    inline void SetFormatted(Aws::String&& value) { m_formattedHasBeenSet = true; m_formatted = std::move(value); }
    inline void SetFormatted(const char* value) { m_formattedHasBeenSet = true; m_formatted.assign(value); }
    inline Name& WithFormatted(const Aws::String& value) { SetFormatted(value); return *this;}
    inline Name& WithFormatted(Aws::String&& value) { SetFormatted(std::move(value)); return *this;}
    inline Name& WithFormatted(const char* value) { SetFormatted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The family name of the user.</p>
     */
    inline const Aws::String& GetFamilyName() const{ return m_familyName; }
    inline bool FamilyNameHasBeenSet() const { return m_familyNameHasBeenSet; }
    inline void SetFamilyName(const Aws::String& value) { m_familyNameHasBeenSet = true; m_familyName = value; }
    inline void SetFamilyName(Aws::String&& value) { m_familyNameHasBeenSet = true; m_familyName = std::move(value); }
    inline void SetFamilyName(const char* value) { m_familyNameHasBeenSet = true; m_familyName.assign(value); }
    inline Name& WithFamilyName(const Aws::String& value) { SetFamilyName(value); return *this;}
    inline Name& WithFamilyName(Aws::String&& value) { SetFamilyName(std::move(value)); return *this;}
    inline Name& WithFamilyName(const char* value) { SetFamilyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The given name of the user.</p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }
    inline Name& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline Name& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline Name& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The middle name of the user.</p>
     */
    inline const Aws::String& GetMiddleName() const{ return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    inline void SetMiddleName(const Aws::String& value) { m_middleNameHasBeenSet = true; m_middleName = value; }
    inline void SetMiddleName(Aws::String&& value) { m_middleNameHasBeenSet = true; m_middleName = std::move(value); }
    inline void SetMiddleName(const char* value) { m_middleNameHasBeenSet = true; m_middleName.assign(value); }
    inline Name& WithMiddleName(const Aws::String& value) { SetMiddleName(value); return *this;}
    inline Name& WithMiddleName(Aws::String&& value) { SetMiddleName(std::move(value)); return *this;}
    inline Name& WithMiddleName(const char* value) { SetMiddleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The honorific prefix of the user. For example, "Dr."</p>
     */
    inline const Aws::String& GetHonorificPrefix() const{ return m_honorificPrefix; }
    inline bool HonorificPrefixHasBeenSet() const { return m_honorificPrefixHasBeenSet; }
    inline void SetHonorificPrefix(const Aws::String& value) { m_honorificPrefixHasBeenSet = true; m_honorificPrefix = value; }
    inline void SetHonorificPrefix(Aws::String&& value) { m_honorificPrefixHasBeenSet = true; m_honorificPrefix = std::move(value); }
    inline void SetHonorificPrefix(const char* value) { m_honorificPrefixHasBeenSet = true; m_honorificPrefix.assign(value); }
    inline Name& WithHonorificPrefix(const Aws::String& value) { SetHonorificPrefix(value); return *this;}
    inline Name& WithHonorificPrefix(Aws::String&& value) { SetHonorificPrefix(std::move(value)); return *this;}
    inline Name& WithHonorificPrefix(const char* value) { SetHonorificPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The honorific suffix of the user. For example, "M.D."</p>
     */
    inline const Aws::String& GetHonorificSuffix() const{ return m_honorificSuffix; }
    inline bool HonorificSuffixHasBeenSet() const { return m_honorificSuffixHasBeenSet; }
    inline void SetHonorificSuffix(const Aws::String& value) { m_honorificSuffixHasBeenSet = true; m_honorificSuffix = value; }
    inline void SetHonorificSuffix(Aws::String&& value) { m_honorificSuffixHasBeenSet = true; m_honorificSuffix = std::move(value); }
    inline void SetHonorificSuffix(const char* value) { m_honorificSuffixHasBeenSet = true; m_honorificSuffix.assign(value); }
    inline Name& WithHonorificSuffix(const Aws::String& value) { SetHonorificSuffix(value); return *this;}
    inline Name& WithHonorificSuffix(Aws::String&& value) { SetHonorificSuffix(std::move(value)); return *this;}
    inline Name& WithHonorificSuffix(const char* value) { SetHonorificSuffix(value); return *this;}
    ///@}
  private:

    Aws::String m_formatted;
    bool m_formattedHasBeenSet = false;

    Aws::String m_familyName;
    bool m_familyNameHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_middleName;
    bool m_middleNameHasBeenSet = false;

    Aws::String m_honorificPrefix;
    bool m_honorificPrefixHasBeenSet = false;

    Aws::String m_honorificSuffix;
    bool m_honorificSuffixHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
