/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The layer part size is not valid, or the first byte specified is not
   * consecutive to the last byte of a previous layer part upload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InvalidLayerPartException">AWS
   * API Reference</a></p>
   */
  class InvalidLayerPartException
  {
  public:
    AWS_ECR_API InvalidLayerPartException();
    AWS_ECR_API InvalidLayerPartException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API InvalidLayerPartException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The registry ID associated with the exception.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline InvalidLayerPartException& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline InvalidLayerPartException& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline InvalidLayerPartException& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the exception.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline InvalidLayerPartException& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline InvalidLayerPartException& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline InvalidLayerPartException& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID associated with the exception.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline InvalidLayerPartException& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline InvalidLayerPartException& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline InvalidLayerPartException& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last valid byte received from the layer part upload that is associated
     * with the exception.</p>
     */
    inline long long GetLastValidByteReceived() const{ return m_lastValidByteReceived; }
    inline bool LastValidByteReceivedHasBeenSet() const { return m_lastValidByteReceivedHasBeenSet; }
    inline void SetLastValidByteReceived(long long value) { m_lastValidByteReceivedHasBeenSet = true; m_lastValidByteReceived = value; }
    inline InvalidLayerPartException& WithLastValidByteReceived(long long value) { SetLastValidByteReceived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message associated with the exception.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InvalidLayerPartException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvalidLayerPartException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvalidLayerPartException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    long long m_lastValidByteReceived;
    bool m_lastValidByteReceivedHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
