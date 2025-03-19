/**
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
    AWS_IDENTITYSTORE_API Name() = default;
    AWS_IDENTITYSTORE_API Name(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Name& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing a formatted version of the name for display.</p>
     */
    inline const Aws::String& GetFormatted() const { return m_formatted; }
    inline bool FormattedHasBeenSet() const { return m_formattedHasBeenSet; }
    template<typename FormattedT = Aws::String>
    void SetFormatted(FormattedT&& value) { m_formattedHasBeenSet = true; m_formatted = std::forward<FormattedT>(value); }
    template<typename FormattedT = Aws::String>
    Name& WithFormatted(FormattedT&& value) { SetFormatted(std::forward<FormattedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The family name of the user.</p>
     */
    inline const Aws::String& GetFamilyName() const { return m_familyName; }
    inline bool FamilyNameHasBeenSet() const { return m_familyNameHasBeenSet; }
    template<typename FamilyNameT = Aws::String>
    void SetFamilyName(FamilyNameT&& value) { m_familyNameHasBeenSet = true; m_familyName = std::forward<FamilyNameT>(value); }
    template<typename FamilyNameT = Aws::String>
    Name& WithFamilyName(FamilyNameT&& value) { SetFamilyName(std::forward<FamilyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The given name of the user.</p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    Name& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The middle name of the user.</p>
     */
    inline const Aws::String& GetMiddleName() const { return m_middleName; }
    inline bool MiddleNameHasBeenSet() const { return m_middleNameHasBeenSet; }
    template<typename MiddleNameT = Aws::String>
    void SetMiddleName(MiddleNameT&& value) { m_middleNameHasBeenSet = true; m_middleName = std::forward<MiddleNameT>(value); }
    template<typename MiddleNameT = Aws::String>
    Name& WithMiddleName(MiddleNameT&& value) { SetMiddleName(std::forward<MiddleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The honorific prefix of the user. For example, "Dr."</p>
     */
    inline const Aws::String& GetHonorificPrefix() const { return m_honorificPrefix; }
    inline bool HonorificPrefixHasBeenSet() const { return m_honorificPrefixHasBeenSet; }
    template<typename HonorificPrefixT = Aws::String>
    void SetHonorificPrefix(HonorificPrefixT&& value) { m_honorificPrefixHasBeenSet = true; m_honorificPrefix = std::forward<HonorificPrefixT>(value); }
    template<typename HonorificPrefixT = Aws::String>
    Name& WithHonorificPrefix(HonorificPrefixT&& value) { SetHonorificPrefix(std::forward<HonorificPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The honorific suffix of the user. For example, "M.D."</p>
     */
    inline const Aws::String& GetHonorificSuffix() const { return m_honorificSuffix; }
    inline bool HonorificSuffixHasBeenSet() const { return m_honorificSuffixHasBeenSet; }
    template<typename HonorificSuffixT = Aws::String>
    void SetHonorificSuffix(HonorificSuffixT&& value) { m_honorificSuffixHasBeenSet = true; m_honorificSuffix = std::forward<HonorificSuffixT>(value); }
    template<typename HonorificSuffixT = Aws::String>
    Name& WithHonorificSuffix(HonorificSuffixT&& value) { SetHonorificSuffix(std::forward<HonorificSuffixT>(value)); return *this;}
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
