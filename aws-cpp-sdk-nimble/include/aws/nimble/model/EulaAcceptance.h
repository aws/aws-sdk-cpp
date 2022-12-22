/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The acceptance of a EULA, required to use Amazon-provided streaming
   * images.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/EulaAcceptance">AWS
   * API Reference</a></p>
   */
  class EulaAcceptance
  {
  public:
    AWS_NIMBLESTUDIO_API EulaAcceptance();
    AWS_NIMBLESTUDIO_API EulaAcceptance(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API EulaAcceptance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptedAt() const{ return m_acceptedAt; }

    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline bool AcceptedAtHasBeenSet() const { return m_acceptedAtHasBeenSet; }

    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline void SetAcceptedAt(const Aws::Utils::DateTime& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = value; }

    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline void SetAcceptedAt(Aws::Utils::DateTime&& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = std::move(value); }

    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline EulaAcceptance& WithAcceptedAt(const Aws::Utils::DateTime& value) { SetAcceptedAt(value); return *this;}

    /**
     * <p>The ISO timestamp in seconds for when the EULA was accepted.</p>
     */
    inline EulaAcceptance& WithAcceptedAt(Aws::Utils::DateTime&& value) { SetAcceptedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline const Aws::String& GetAcceptedBy() const{ return m_acceptedBy; }

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline bool AcceptedByHasBeenSet() const { return m_acceptedByHasBeenSet; }

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline void SetAcceptedBy(const Aws::String& value) { m_acceptedByHasBeenSet = true; m_acceptedBy = value; }

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline void SetAcceptedBy(Aws::String&& value) { m_acceptedByHasBeenSet = true; m_acceptedBy = std::move(value); }

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline void SetAcceptedBy(const char* value) { m_acceptedByHasBeenSet = true; m_acceptedBy.assign(value); }

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline EulaAcceptance& WithAcceptedBy(const Aws::String& value) { SetAcceptedBy(value); return *this;}

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline EulaAcceptance& WithAcceptedBy(Aws::String&& value) { SetAcceptedBy(std::move(value)); return *this;}

    /**
     * <p>The ID of the person who accepted the EULA.</p>
     */
    inline EulaAcceptance& WithAcceptedBy(const char* value) { SetAcceptedBy(value); return *this;}


    /**
     * <p>The ID of the acceptee.</p>
     */
    inline const Aws::String& GetAccepteeId() const{ return m_accepteeId; }

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline bool AccepteeIdHasBeenSet() const { return m_accepteeIdHasBeenSet; }

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline void SetAccepteeId(const Aws::String& value) { m_accepteeIdHasBeenSet = true; m_accepteeId = value; }

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline void SetAccepteeId(Aws::String&& value) { m_accepteeIdHasBeenSet = true; m_accepteeId = std::move(value); }

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline void SetAccepteeId(const char* value) { m_accepteeIdHasBeenSet = true; m_accepteeId.assign(value); }

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline EulaAcceptance& WithAccepteeId(const Aws::String& value) { SetAccepteeId(value); return *this;}

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline EulaAcceptance& WithAccepteeId(Aws::String&& value) { SetAccepteeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the acceptee.</p>
     */
    inline EulaAcceptance& WithAccepteeId(const char* value) { SetAccepteeId(value); return *this;}


    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline const Aws::String& GetEulaAcceptanceId() const{ return m_eulaAcceptanceId; }

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline bool EulaAcceptanceIdHasBeenSet() const { return m_eulaAcceptanceIdHasBeenSet; }

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline void SetEulaAcceptanceId(const Aws::String& value) { m_eulaAcceptanceIdHasBeenSet = true; m_eulaAcceptanceId = value; }

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline void SetEulaAcceptanceId(Aws::String&& value) { m_eulaAcceptanceIdHasBeenSet = true; m_eulaAcceptanceId = std::move(value); }

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline void SetEulaAcceptanceId(const char* value) { m_eulaAcceptanceIdHasBeenSet = true; m_eulaAcceptanceId.assign(value); }

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline EulaAcceptance& WithEulaAcceptanceId(const Aws::String& value) { SetEulaAcceptanceId(value); return *this;}

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline EulaAcceptance& WithEulaAcceptanceId(Aws::String&& value) { SetEulaAcceptanceId(std::move(value)); return *this;}

    /**
     * <p>The EULA acceptance ID.</p>
     */
    inline EulaAcceptance& WithEulaAcceptanceId(const char* value) { SetEulaAcceptanceId(value); return *this;}


    /**
     * <p>The EULA ID.</p>
     */
    inline const Aws::String& GetEulaId() const{ return m_eulaId; }

    /**
     * <p>The EULA ID.</p>
     */
    inline bool EulaIdHasBeenSet() const { return m_eulaIdHasBeenSet; }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(const Aws::String& value) { m_eulaIdHasBeenSet = true; m_eulaId = value; }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(Aws::String&& value) { m_eulaIdHasBeenSet = true; m_eulaId = std::move(value); }

    /**
     * <p>The EULA ID.</p>
     */
    inline void SetEulaId(const char* value) { m_eulaIdHasBeenSet = true; m_eulaId.assign(value); }

    /**
     * <p>The EULA ID.</p>
     */
    inline EulaAcceptance& WithEulaId(const Aws::String& value) { SetEulaId(value); return *this;}

    /**
     * <p>The EULA ID.</p>
     */
    inline EulaAcceptance& WithEulaId(Aws::String&& value) { SetEulaId(std::move(value)); return *this;}

    /**
     * <p>The EULA ID.</p>
     */
    inline EulaAcceptance& WithEulaId(const char* value) { SetEulaId(value); return *this;}

  private:

    Aws::Utils::DateTime m_acceptedAt;
    bool m_acceptedAtHasBeenSet = false;

    Aws::String m_acceptedBy;
    bool m_acceptedByHasBeenSet = false;

    Aws::String m_accepteeId;
    bool m_accepteeIdHasBeenSet = false;

    Aws::String m_eulaAcceptanceId;
    bool m_eulaAcceptanceIdHasBeenSet = false;

    Aws::String m_eulaId;
    bool m_eulaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
