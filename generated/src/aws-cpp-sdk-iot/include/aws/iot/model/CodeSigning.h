/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/StartSigningJobParameter.h>
#include <aws/iot/model/CustomCodeSigning.h>
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
   * <p>Describes the method to use when code signing a file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CodeSigning">AWS API
   * Reference</a></p>
   */
  class CodeSigning
  {
  public:
    AWS_IOT_API CodeSigning() = default;
    AWS_IOT_API CodeSigning(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline const Aws::String& GetAwsSignerJobId() const { return m_awsSignerJobId; }
    inline bool AwsSignerJobIdHasBeenSet() const { return m_awsSignerJobIdHasBeenSet; }
    template<typename AwsSignerJobIdT = Aws::String>
    void SetAwsSignerJobId(AwsSignerJobIdT&& value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId = std::forward<AwsSignerJobIdT>(value); }
    template<typename AwsSignerJobIdT = Aws::String>
    CodeSigning& WithAwsSignerJobId(AwsSignerJobIdT&& value) { SetAwsSignerJobId(std::forward<AwsSignerJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the code-signing job.</p>
     */
    inline const StartSigningJobParameter& GetStartSigningJobParameter() const { return m_startSigningJobParameter; }
    inline bool StartSigningJobParameterHasBeenSet() const { return m_startSigningJobParameterHasBeenSet; }
    template<typename StartSigningJobParameterT = StartSigningJobParameter>
    void SetStartSigningJobParameter(StartSigningJobParameterT&& value) { m_startSigningJobParameterHasBeenSet = true; m_startSigningJobParameter = std::forward<StartSigningJobParameterT>(value); }
    template<typename StartSigningJobParameterT = StartSigningJobParameter>
    CodeSigning& WithStartSigningJobParameter(StartSigningJobParameterT&& value) { SetStartSigningJobParameter(std::forward<StartSigningJobParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline const CustomCodeSigning& GetCustomCodeSigning() const { return m_customCodeSigning; }
    inline bool CustomCodeSigningHasBeenSet() const { return m_customCodeSigningHasBeenSet; }
    template<typename CustomCodeSigningT = CustomCodeSigning>
    void SetCustomCodeSigning(CustomCodeSigningT&& value) { m_customCodeSigningHasBeenSet = true; m_customCodeSigning = std::forward<CustomCodeSigningT>(value); }
    template<typename CustomCodeSigningT = CustomCodeSigning>
    CodeSigning& WithCustomCodeSigning(CustomCodeSigningT&& value) { SetCustomCodeSigning(std::forward<CustomCodeSigningT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsSignerJobId;
    bool m_awsSignerJobIdHasBeenSet = false;

    StartSigningJobParameter m_startSigningJobParameter;
    bool m_startSigningJobParameterHasBeenSet = false;

    CustomCodeSigning m_customCodeSigning;
    bool m_customCodeSigningHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
