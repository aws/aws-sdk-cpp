/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Describes an Electronic Data Interchange (EDI) entity as described in as
   * defined in <a href="https://datatracker.ietf.org/doc/html/rfc5280">Subject
   * Alternative Name</a> in RFC 5280.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/EdiPartyName">AWS
   * API Reference</a></p>
   */
  class EdiPartyName
  {
  public:
    AWS_ACMPCA_API EdiPartyName() = default;
    AWS_ACMPCA_API EdiPartyName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API EdiPartyName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the party name.</p>
     */
    inline const Aws::String& GetPartyName() const { return m_partyName; }
    inline bool PartyNameHasBeenSet() const { return m_partyNameHasBeenSet; }
    template<typename PartyNameT = Aws::String>
    void SetPartyName(PartyNameT&& value) { m_partyNameHasBeenSet = true; m_partyName = std::forward<PartyNameT>(value); }
    template<typename PartyNameT = Aws::String>
    EdiPartyName& WithPartyName(PartyNameT&& value) { SetPartyName(std::forward<PartyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name assigner.</p>
     */
    inline const Aws::String& GetNameAssigner() const { return m_nameAssigner; }
    inline bool NameAssignerHasBeenSet() const { return m_nameAssignerHasBeenSet; }
    template<typename NameAssignerT = Aws::String>
    void SetNameAssigner(NameAssignerT&& value) { m_nameAssignerHasBeenSet = true; m_nameAssigner = std::forward<NameAssignerT>(value); }
    template<typename NameAssignerT = Aws::String>
    EdiPartyName& WithNameAssigner(NameAssignerT&& value) { SetNameAssigner(std::forward<NameAssignerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partyName;
    bool m_partyNameHasBeenSet = false;

    Aws::String m_nameAssigner;
    bool m_nameAssignerHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
