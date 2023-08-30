/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The shared access signature (SAS) configuration that allows DataSync to
   * access your Microsoft Azure Blob Storage.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-sas-tokens">SAS
   * tokens</a> for accessing your Azure Blob Storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/AzureBlobSasConfiguration">AWS
   * API Reference</a></p>
   */
  class AzureBlobSasConfiguration
  {
  public:
    AWS_DATASYNC_API AzureBlobSasConfiguration();
    AWS_DATASYNC_API AzureBlobSasConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API AzureBlobSasConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline AzureBlobSasConfiguration& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline AzureBlobSasConfiguration& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a SAS token that provides permissions to access your Azure Blob
     * Storage.</p> <p>The token is part of the SAS URI string that comes after the
     * storage resource URI and a question mark. A token looks something like this:</p>
     * <p>
     * <code>sp=r&amp;st=2023-12-20T14:54:52Z&amp;se=2023-12-20T22:54:52Z&amp;spr=https&amp;sv=2021-06-08&amp;sr=c&amp;sig=aBBKDWQvyuVcTPH9EBp%2FXTI9E%2F%2Fmq171%2BZU178wcwqU%3D</code>
     * </p>
     */
    inline AzureBlobSasConfiguration& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
