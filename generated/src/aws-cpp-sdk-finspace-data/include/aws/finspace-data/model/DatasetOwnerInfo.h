/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>A structure for Dataset owner info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DatasetOwnerInfo">AWS
   * API Reference</a></p>
   */
  class DatasetOwnerInfo
  {
  public:
    AWS_FINSPACEDATA_API DatasetOwnerInfo();
    AWS_FINSPACEDATA_API DatasetOwnerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API DatasetOwnerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>Phone number for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Email address for the Dataset owner.</p>
     */
    inline DatasetOwnerInfo& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
