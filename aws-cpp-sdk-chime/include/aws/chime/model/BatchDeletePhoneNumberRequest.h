/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchDeletePhoneNumberRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchDeletePhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeletePhoneNumber"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>List of phone number IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhoneNumberIds() const{ return m_phoneNumberIds; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline bool PhoneNumberIdsHasBeenSet() const { return m_phoneNumberIdsHasBeenSet; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline void SetPhoneNumberIds(const Aws::Vector<Aws::String>& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = value; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline void SetPhoneNumberIds(Aws::Vector<Aws::String>&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds = std::move(value); }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(const Aws::Vector<Aws::String>& value) { SetPhoneNumberIds(value); return *this;}

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& WithPhoneNumberIds(Aws::Vector<Aws::String>&& value) { SetPhoneNumberIds(std::move(value)); return *this;}

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const Aws::String& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(Aws::String&& value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(std::move(value)); return *this; }

    /**
     * <p>List of phone number IDs.</p>
     */
    inline BatchDeletePhoneNumberRequest& AddPhoneNumberIds(const char* value) { m_phoneNumberIdsHasBeenSet = true; m_phoneNumberIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_phoneNumberIds;
    bool m_phoneNumberIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
