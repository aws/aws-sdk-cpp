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
    AWS_IOT_API CodeSigning();
    AWS_IOT_API CodeSigning(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline const Aws::String& GetAwsSignerJobId() const{ return m_awsSignerJobId; }

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline bool AwsSignerJobIdHasBeenSet() const { return m_awsSignerJobIdHasBeenSet; }

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline void SetAwsSignerJobId(const Aws::String& value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId = value; }

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline void SetAwsSignerJobId(Aws::String&& value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId = std::move(value); }

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline void SetAwsSignerJobId(const char* value) { m_awsSignerJobIdHasBeenSet = true; m_awsSignerJobId.assign(value); }

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline CodeSigning& WithAwsSignerJobId(const Aws::String& value) { SetAwsSignerJobId(value); return *this;}

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
     */
    inline CodeSigning& WithAwsSignerJobId(Aws::String&& value) { SetAwsSignerJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>AWSSignerJob</code> which was created to sign the
     * file.</p>
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
    bool m_awsSignerJobIdHasBeenSet = false;

    StartSigningJobParameter m_startSigningJobParameter;
    bool m_startSigningJobParameterHasBeenSet = false;

    CustomCodeSigning m_customCodeSigning;
    bool m_customCodeSigningHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
