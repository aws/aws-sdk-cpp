/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Information about any problems encountered while processing an upload
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/DocumentServiceException">AWS
   * API Reference</a></p>
   */
  class DocumentServiceException
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API DocumentServiceException();
    AWS_CLOUDSEARCHDOMAIN_API DocumentServiceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API DocumentServiceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline DocumentServiceException& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline DocumentServiceException& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The return status of a document upload request, <code>error</code> or
     * <code>success</code>.</p>
     */
    inline DocumentServiceException& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline DocumentServiceException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline DocumentServiceException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The description of the errors returned by the document service.</p>
     */
    inline DocumentServiceException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
