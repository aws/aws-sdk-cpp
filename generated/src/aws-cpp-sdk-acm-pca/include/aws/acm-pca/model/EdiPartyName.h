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
    AWS_ACMPCA_API EdiPartyName();
    AWS_ACMPCA_API EdiPartyName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API EdiPartyName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the party name.</p>
     */
    inline const Aws::String& GetPartyName() const{ return m_partyName; }

    /**
     * <p>Specifies the party name.</p>
     */
    inline bool PartyNameHasBeenSet() const { return m_partyNameHasBeenSet; }

    /**
     * <p>Specifies the party name.</p>
     */
    inline void SetPartyName(const Aws::String& value) { m_partyNameHasBeenSet = true; m_partyName = value; }

    /**
     * <p>Specifies the party name.</p>
     */
    inline void SetPartyName(Aws::String&& value) { m_partyNameHasBeenSet = true; m_partyName = std::move(value); }

    /**
     * <p>Specifies the party name.</p>
     */
    inline void SetPartyName(const char* value) { m_partyNameHasBeenSet = true; m_partyName.assign(value); }

    /**
     * <p>Specifies the party name.</p>
     */
    inline EdiPartyName& WithPartyName(const Aws::String& value) { SetPartyName(value); return *this;}

    /**
     * <p>Specifies the party name.</p>
     */
    inline EdiPartyName& WithPartyName(Aws::String&& value) { SetPartyName(std::move(value)); return *this;}

    /**
     * <p>Specifies the party name.</p>
     */
    inline EdiPartyName& WithPartyName(const char* value) { SetPartyName(value); return *this;}


    /**
     * <p>Specifies the name assigner.</p>
     */
    inline const Aws::String& GetNameAssigner() const{ return m_nameAssigner; }

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline bool NameAssignerHasBeenSet() const { return m_nameAssignerHasBeenSet; }

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline void SetNameAssigner(const Aws::String& value) { m_nameAssignerHasBeenSet = true; m_nameAssigner = value; }

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline void SetNameAssigner(Aws::String&& value) { m_nameAssignerHasBeenSet = true; m_nameAssigner = std::move(value); }

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline void SetNameAssigner(const char* value) { m_nameAssignerHasBeenSet = true; m_nameAssigner.assign(value); }

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline EdiPartyName& WithNameAssigner(const Aws::String& value) { SetNameAssigner(value); return *this;}

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline EdiPartyName& WithNameAssigner(Aws::String&& value) { SetNameAssigner(std::move(value)); return *this;}

    /**
     * <p>Specifies the name assigner.</p>
     */
    inline EdiPartyName& WithNameAssigner(const char* value) { SetNameAssigner(value); return *this;}

  private:

    Aws::String m_partyName;
    bool m_partyNameHasBeenSet = false;

    Aws::String m_nameAssigner;
    bool m_nameAssignerHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
