/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/SigningProfileParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Destination.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information required to start a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartSigningJobParameter">AWS
   * API Reference</a></p>
   */
  class StartSigningJobParameter
  {
  public:
    AWS_IOT_API StartSigningJobParameter() = default;
    AWS_IOT_API StartSigningJobParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StartSigningJobParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline const SigningProfileParameter& GetSigningProfileParameter() const { return m_signingProfileParameter; }
    inline bool SigningProfileParameterHasBeenSet() const { return m_signingProfileParameterHasBeenSet; }
    template<typename SigningProfileParameterT = SigningProfileParameter>
    void SetSigningProfileParameter(SigningProfileParameterT&& value) { m_signingProfileParameterHasBeenSet = true; m_signingProfileParameter = std::forward<SigningProfileParameterT>(value); }
    template<typename SigningProfileParameterT = SigningProfileParameter>
    StartSigningJobParameter& WithSigningProfileParameter(SigningProfileParameterT&& value) { SetSigningProfileParameter(std::forward<SigningProfileParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code-signing profile name.</p>
     */
    inline const Aws::String& GetSigningProfileName() const { return m_signingProfileName; }
    inline bool SigningProfileNameHasBeenSet() const { return m_signingProfileNameHasBeenSet; }
    template<typename SigningProfileNameT = Aws::String>
    void SetSigningProfileName(SigningProfileNameT&& value) { m_signingProfileNameHasBeenSet = true; m_signingProfileName = std::forward<SigningProfileNameT>(value); }
    template<typename SigningProfileNameT = Aws::String>
    StartSigningJobParameter& WithSigningProfileName(SigningProfileNameT&& value) { SetSigningProfileName(std::forward<SigningProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    StartSigningJobParameter& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    SigningProfileParameter m_signingProfileParameter;
    bool m_signingProfileParameterHasBeenSet = false;

    Aws::String m_signingProfileName;
    bool m_signingProfileNameHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
