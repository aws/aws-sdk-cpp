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
    AWS_IOT_API StartSigningJobParameter();
    AWS_IOT_API StartSigningJobParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API StartSigningJobParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline const SigningProfileParameter& GetSigningProfileParameter() const{ return m_signingProfileParameter; }

    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline bool SigningProfileParameterHasBeenSet() const { return m_signingProfileParameterHasBeenSet; }

    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline void SetSigningProfileParameter(const SigningProfileParameter& value) { m_signingProfileParameterHasBeenSet = true; m_signingProfileParameter = value; }

    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline void SetSigningProfileParameter(SigningProfileParameter&& value) { m_signingProfileParameterHasBeenSet = true; m_signingProfileParameter = std::move(value); }

    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline StartSigningJobParameter& WithSigningProfileParameter(const SigningProfileParameter& value) { SetSigningProfileParameter(value); return *this;}

    /**
     * <p>Describes the code-signing profile.</p>
     */
    inline StartSigningJobParameter& WithSigningProfileParameter(SigningProfileParameter&& value) { SetSigningProfileParameter(std::move(value)); return *this;}


    /**
     * <p>The code-signing profile name.</p>
     */
    inline const Aws::String& GetSigningProfileName() const{ return m_signingProfileName; }

    /**
     * <p>The code-signing profile name.</p>
     */
    inline bool SigningProfileNameHasBeenSet() const { return m_signingProfileNameHasBeenSet; }

    /**
     * <p>The code-signing profile name.</p>
     */
    inline void SetSigningProfileName(const Aws::String& value) { m_signingProfileNameHasBeenSet = true; m_signingProfileName = value; }

    /**
     * <p>The code-signing profile name.</p>
     */
    inline void SetSigningProfileName(Aws::String&& value) { m_signingProfileNameHasBeenSet = true; m_signingProfileName = std::move(value); }

    /**
     * <p>The code-signing profile name.</p>
     */
    inline void SetSigningProfileName(const char* value) { m_signingProfileNameHasBeenSet = true; m_signingProfileName.assign(value); }

    /**
     * <p>The code-signing profile name.</p>
     */
    inline StartSigningJobParameter& WithSigningProfileName(const Aws::String& value) { SetSigningProfileName(value); return *this;}

    /**
     * <p>The code-signing profile name.</p>
     */
    inline StartSigningJobParameter& WithSigningProfileName(Aws::String&& value) { SetSigningProfileName(std::move(value)); return *this;}

    /**
     * <p>The code-signing profile name.</p>
     */
    inline StartSigningJobParameter& WithSigningProfileName(const char* value) { SetSigningProfileName(value); return *this;}


    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline StartSigningJobParameter& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The location to write the code-signed file.</p>
     */
    inline StartSigningJobParameter& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}

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
