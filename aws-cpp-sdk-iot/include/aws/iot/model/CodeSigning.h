/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API CodeSigning
  {
  public:
    CodeSigning();
    CodeSigning(Aws::Utils::Json::JsonView jsonValue);
    CodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline const Aws::String& GetAwsSignerJobId() const{ return m_awsSignerJobId; }

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline bool AwsSignerJobIdHasBeenSet() const { return m_awsSignerJobIdHasBeenSet; }

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline void SetAwsSignerJobId(const Aws::String& value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId = value; }

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline void SetAwsSignerJobId(Aws::String&& value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId = std::move(value); }

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline void SetAwsSignerJobId(const char* value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId.assign(value); }

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline CodeSigning& WithAwsSignerJobId(const Aws::String& value) { SetAwsSignerJobId(value); return *this;}

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline CodeSigning& WithAwsSignerJobId(Aws::String&& value) { SetAwsSignerJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWSSignerJob which was created to sign the file.</p>
     */
    inline CodeSigning& WithAwsSignerJobId(const char* value) { SetAwsSignerJobId(value); return *this;}


    /**
     * <p>Describes the code-signing job.</p>
     */
    inline const StartSigningJobParameter& GetStartSigningJobParameter() const{ return m_startSigningJobParameter; }

    /**
     * <p>Describes the code-signing job.</p>
     */
    inline bool StartSigningJobParameterHasBeenSet() const { return m_startSigningJobParameterHasBeenSet; }

    /**
     * <p>Describes the code-signing job.</p>
     */
    inline void SetStartSigningJobParameter(const StartSigningJobParameter& value) { m_startSigningJobParameterHasBeenSet = true; m_startSigningJobParameter = value; }

    /**
     * <p>Describes the code-signing job.</p>
     */
    inline void SetStartSigningJobParameter(StartSigningJobParameter&& value) { m_startSigningJobParameterHasBeenSet = true; m_startSigningJobParameter = std::move(value); }

    /**
     * <p>Describes the code-signing job.</p>
     */
    inline CodeSigning& WithStartSigningJobParameter(const StartSigningJobParameter& value) { SetStartSigningJobParameter(value); return *this;}

    /**
     * <p>Describes the code-signing job.</p>
     */
    inline CodeSigning& WithStartSigningJobParameter(StartSigningJobParameter&& value) { SetStartSigningJobParameter(std::move(value)); return *this;}


    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline const CustomCodeSigning& GetCustomCodeSigning() const{ return m_customCodeSigning; }

    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline bool CustomCodeSigningHasBeenSet() const { return m_customCodeSigningHasBeenSet; }

    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline void SetCustomCodeSigning(const CustomCodeSigning& value) { m_customCodeSigningHasBeenSet = true; m_customCodeSigning = value; }

    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline void SetCustomCodeSigning(CustomCodeSigning&& value) { m_customCodeSigningHasBeenSet = true; m_customCodeSigning = std::move(value); }

    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline CodeSigning& WithCustomCodeSigning(const CustomCodeSigning& value) { SetCustomCodeSigning(value); return *this;}

    /**
     * <p>A custom method for code signing a file.</p>
     */
    inline CodeSigning& WithCustomCodeSigning(CustomCodeSigning&& value) { SetCustomCodeSigning(std::move(value)); return *this;}

  private:

    Aws::String m_awsSignerJobId;
    bool m_awsSignerJobIdHasBeenSet;

    StartSigningJobParameter m_startSigningJobParameter;
    bool m_startSigningJobParameterHasBeenSet;

    CustomCodeSigning m_customCodeSigning;
    bool m_customCodeSigningHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
