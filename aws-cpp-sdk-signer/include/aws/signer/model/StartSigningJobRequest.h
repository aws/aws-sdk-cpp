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
#include <aws/signer/SignerRequest.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class AWS_SIGNER_API StartSigningJobRequest : public SignerRequest
  {
  public:
    StartSigningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSigningJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline StartSigningJobRequest& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The S3 bucket that contains the object to sign or a BLOB that contains your
     * raw code.</p>
     */
    inline StartSigningJobRequest& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }

    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline StartSigningJobRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /**
     * <p>The S3 bucket in which to save your signed object. The destination contains
     * the name of your bucket and an optional prefix.</p>
     */
    inline StartSigningJobRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline StartSigningJobRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline StartSigningJobRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline StartSigningJobRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline StartSigningJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline StartSigningJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>String that identifies the signing request. All calls after the first that
     * use this token return the same response as the first call.</p>
     */
    inline StartSigningJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Source m_source;
    bool m_sourceHasBeenSet;

    Destination m_destination;
    bool m_destinationHasBeenSet;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
