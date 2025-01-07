/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about a reference when the <code>referenceType</code> is
   * <code>ATTACHMENT</code>. Otherwise, null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttachmentReference">AWS
   * API Reference</a></p>
   */
  class AttachmentReference
  {
  public:
    AWS_CONNECT_API AttachmentReference();
    AWS_CONNECT_API AttachmentReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AttachmentReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentReference& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentReference& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline AttachmentReference& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline AttachmentReference& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline AttachmentReference& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReferenceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReferenceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AttachmentReference& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}
    inline AttachmentReference& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the attachment reference.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AttachmentReference& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AttachmentReference& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AttachmentReference& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ReferenceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
