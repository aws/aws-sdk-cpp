/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Error details for the failed asynchronous operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AsyncErrorDetails">AWS
   * API Reference</a></p>
   */
  class AsyncErrorDetails
  {
  public:
    AWS_S3CONTROL_API AsyncErrorDetails();
    AWS_S3CONTROL_API AsyncErrorDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AsyncErrorDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline AsyncErrorDetails& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline AsyncErrorDetails& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>A string that uniquely identifies the error condition.</p>
     */
    inline AsyncErrorDetails& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline AsyncErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline AsyncErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A generic description of the error condition in English.</p>
     */
    inline AsyncErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline AsyncErrorDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline AsyncErrorDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource associated with the error.</p>
     */
    inline AsyncErrorDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline AsyncErrorDetails& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline AsyncErrorDetails& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the request associated with the error.</p>
     */
    inline AsyncErrorDetails& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
