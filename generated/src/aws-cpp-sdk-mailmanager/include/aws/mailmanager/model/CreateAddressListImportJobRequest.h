/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ImportDataFormat.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class CreateAddressListImportJobRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateAddressListImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddressListImportJob"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the address list for importing addresses to.</p>
     */
    inline const Aws::String& GetAddressListId() const{ return m_addressListId; }
    inline bool AddressListIdHasBeenSet() const { return m_addressListIdHasBeenSet; }
    inline void SetAddressListId(const Aws::String& value) { m_addressListIdHasBeenSet = true; m_addressListId = value; }
    inline void SetAddressListId(Aws::String&& value) { m_addressListIdHasBeenSet = true; m_addressListId = std::move(value); }
    inline void SetAddressListId(const char* value) { m_addressListIdHasBeenSet = true; m_addressListId.assign(value); }
    inline CreateAddressListImportJobRequest& WithAddressListId(const Aws::String& value) { SetAddressListId(value); return *this;}
    inline CreateAddressListImportJobRequest& WithAddressListId(Aws::String&& value) { SetAddressListId(std::move(value)); return *this;}
    inline CreateAddressListImportJobRequest& WithAddressListId(const char* value) { SetAddressListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that Amazon SES uses to recognize subsequent retries of the
     * same request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAddressListImportJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAddressListImportJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAddressListImportJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the input for an import job.</p>
     */
    inline const ImportDataFormat& GetImportDataFormat() const{ return m_importDataFormat; }
    inline bool ImportDataFormatHasBeenSet() const { return m_importDataFormatHasBeenSet; }
    inline void SetImportDataFormat(const ImportDataFormat& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = value; }
    inline void SetImportDataFormat(ImportDataFormat&& value) { m_importDataFormatHasBeenSet = true; m_importDataFormat = std::move(value); }
    inline CreateAddressListImportJobRequest& WithImportDataFormat(const ImportDataFormat& value) { SetImportDataFormat(value); return *this;}
    inline CreateAddressListImportJobRequest& WithImportDataFormat(ImportDataFormat&& value) { SetImportDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the import job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAddressListImportJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAddressListImportJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAddressListImportJobRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_addressListId;
    bool m_addressListIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ImportDataFormat m_importDataFormat;
    bool m_importDataFormatHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
