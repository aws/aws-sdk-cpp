﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DocumentStatus.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the status of documents submitted for
   * indexing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Status">AWS API
   * Reference</a></p>
   */
  class Status
  {
  public:
    AWS_KENDRA_API Status();
    AWS_KENDRA_API Status(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Status& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline Status& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline Status& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline Status& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of a document.</p> <p>If the document was submitted for
     * deletion, the status is <code>NOT_FOUND</code> after the document is
     * deleted.</p>
     */
    inline const DocumentStatus& GetDocumentStatus() const{ return m_documentStatus; }
    inline bool DocumentStatusHasBeenSet() const { return m_documentStatusHasBeenSet; }
    inline void SetDocumentStatus(const DocumentStatus& value) { m_documentStatusHasBeenSet = true; m_documentStatus = value; }
    inline void SetDocumentStatus(DocumentStatus&& value) { m_documentStatusHasBeenSet = true; m_documentStatus = std::move(value); }
    inline Status& WithDocumentStatus(const DocumentStatus& value) { SetDocumentStatus(value); return *this;}
    inline Status& WithDocumentStatus(DocumentStatus&& value) { SetDocumentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the source of the error.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline Status& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline Status& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline Status& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed information about why the document couldn't be indexed. Use
     * this information to correct the error before you resubmit the document for
     * indexing.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline Status& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline Status& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline Status& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    DocumentStatus m_documentStatus;
    bool m_documentStatusHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
