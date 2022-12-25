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


    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline AttachmentReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline AttachmentReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Identifier of the attachment reference.</p>
     */
    inline AttachmentReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline AttachmentReference& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline AttachmentReference& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The location path of the attachment reference.</p>
     */
    inline AttachmentReference& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline void SetStatus(const ReferenceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline void SetStatus(ReferenceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline AttachmentReference& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the attachment reference type.</p>
     */
    inline AttachmentReference& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ReferenceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
