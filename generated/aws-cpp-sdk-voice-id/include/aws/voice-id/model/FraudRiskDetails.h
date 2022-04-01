/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/KnownFraudsterRisk.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Details regarding various fraud risk analyses performed against the current
   * session state and streamed audio of the speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudRiskDetails">AWS
   * API Reference</a></p>
   */
  class AWS_VOICEID_API FraudRiskDetails
  {
  public:
    FraudRiskDetails();
    FraudRiskDetails(Aws::Utils::Json::JsonView jsonValue);
    FraudRiskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline const KnownFraudsterRisk& GetKnownFraudsterRisk() const{ return m_knownFraudsterRisk; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline bool KnownFraudsterRiskHasBeenSet() const { return m_knownFraudsterRiskHasBeenSet; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline void SetKnownFraudsterRisk(const KnownFraudsterRisk& value) { m_knownFraudsterRiskHasBeenSet = true; m_knownFraudsterRisk = value; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline void SetKnownFraudsterRisk(KnownFraudsterRisk&& value) { m_knownFraudsterRiskHasBeenSet = true; m_knownFraudsterRisk = std::move(value); }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline FraudRiskDetails& WithKnownFraudsterRisk(const KnownFraudsterRisk& value) { SetKnownFraudsterRisk(value); return *this;}

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline FraudRiskDetails& WithKnownFraudsterRisk(KnownFraudsterRisk&& value) { SetKnownFraudsterRisk(std::move(value)); return *this;}

  private:

    KnownFraudsterRisk m_knownFraudsterRisk;
    bool m_knownFraudsterRiskHasBeenSet;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
