/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ReferenceType.h>
#include <aws/connect/model/ReferenceStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Well-formed data on a contact, used by agents to complete a contact request.
   * You can have up to 4,096 UTF-8 bytes across all references for a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Reference">AWS
   * API Reference</a></p>
   */
  class Reference
  {
  public:
    AWS_CONNECT_API Reference();
    AWS_CONNECT_API Reference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A valid value for the reference. For example, for a URL reference, a
     * formatted URL that is displayed to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Reference& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Reference& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Reference& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the reference. <code>DATE</code> must be of type Epoch timestamp.
     * </p>
     */
    inline const ReferenceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ReferenceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ReferenceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Reference& WithType(const ReferenceType& value) { SetType(value); return *this;}
    inline Reference& WithType(ReferenceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReferenceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReferenceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Reference& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}
    inline Reference& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the reference</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Reference& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Reference& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Reference& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Relevant details why the reference was not successfully created.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline Reference& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline Reference& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline Reference& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ReferenceType m_type;
    bool m_typeHasBeenSet = false;

    ReferenceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
