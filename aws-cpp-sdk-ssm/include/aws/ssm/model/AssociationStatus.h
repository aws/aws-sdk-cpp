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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationStatusName.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes an association status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationStatus">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationStatus
  {
  public:
    AssociationStatus();
    AssociationStatus(Aws::Utils::Json::JsonView jsonValue);
    AssociationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date when the status changed.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date when the status changed.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date when the status changed.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date when the status changed.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date when the status changed.</p>
     */
    inline AssociationStatus& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date when the status changed.</p>
     */
    inline AssociationStatus& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const AssociationStatusName& GetName() const{ return m_name; }

    /**
     * <p>The status.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetName(const AssociationStatusName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetName(AssociationStatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline AssociationStatus& WithName(const AssociationStatusName& value) { SetName(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline AssociationStatus& WithName(AssociationStatusName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The reason for the status.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The reason for the status.</p>
     */
    inline AssociationStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline AssociationStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The reason for the status.</p>
     */
    inline AssociationStatus& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A user-defined string.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>A user-defined string.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>A user-defined string.</p>
     */
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>A user-defined string.</p>
     */
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>A user-defined string.</p>
     */
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }

    /**
     * <p>A user-defined string.</p>
     */
    inline AssociationStatus& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>A user-defined string.</p>
     */
    inline AssociationStatus& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>A user-defined string.</p>
     */
    inline AssociationStatus& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}

  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet;

    AssociationStatusName m_name;
    bool m_nameHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
