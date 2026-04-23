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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/SignedObject.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/core/utils/DateTime.h>
#include <aws/signer/model/SigningStatus.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Contains information about a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningJob">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningJob
  {
  public:
    SigningJob();
    SigningJob(Aws::Utils::Json::JsonView jsonValue);
    SigningJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the signing job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the signing job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the signing job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the signing job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the signing job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the signing job.</p>
     */
    inline SigningJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the signing job.</p>
     */
    inline SigningJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the signing job.</p>
     */
    inline SigningJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline SigningJob& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline SigningJob& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline const SignedObject& GetSignedObject() const{ return m_signedObject; }

    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline bool SignedObjectHasBeenSet() const { return m_signedObjectHasBeenSet; }

    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline void SetSignedObject(const SignedObject& value) { m_signedObjectHasBeenSet = true; m_signedObject = value; }

    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline void SetSignedObject(SignedObject&& value) { m_signedObjectHasBeenSet = true; m_signedObject = std::move(value); }

    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline SigningJob& WithSignedObject(const SignedObject& value) { SetSignedObject(value); return *this;}

    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline SigningJob& WithSignedObject(SignedObject&& value) { SetSignedObject(std::move(value)); return *this;}


    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }

    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }

    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }

    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline SigningJob& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline SigningJob& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline SigningJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline SigningJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the signing job.</p>
     */
    inline const SigningStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the signing job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the signing job.</p>
     */
    inline void SetStatus(const SigningStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the signing job.</p>
     */
    inline void SetStatus(SigningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the signing job.</p>
     */
    inline SigningJob& WithStatus(const SigningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the signing job.</p>
     */
    inline SigningJob& WithStatus(SigningStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Source m_source;
    bool m_sourceHasBeenSet;

    SignedObject m_signedObject;
    bool m_signedObjectHasBeenSet;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    SigningStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
