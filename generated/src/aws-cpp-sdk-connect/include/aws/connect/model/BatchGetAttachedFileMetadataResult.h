/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AttachedFile.h>
#include <aws/connect/model/AttachedFileError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class BatchGetAttachedFileMetadataResult
  {
  public:
    AWS_CONNECT_API BatchGetAttachedFileMetadataResult();
    AWS_CONNECT_API BatchGetAttachedFileMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchGetAttachedFileMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline const Aws::Vector<AttachedFile>& GetFiles() const{ return m_files; }

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline void SetFiles(const Aws::Vector<AttachedFile>& value) { m_files = value; }

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline void SetFiles(Aws::Vector<AttachedFile>&& value) { m_files = std::move(value); }

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& WithFiles(const Aws::Vector<AttachedFile>& value) { SetFiles(value); return *this;}

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& WithFiles(Aws::Vector<AttachedFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& AddFiles(const AttachedFile& value) { m_files.push_back(value); return *this; }

    /**
     * <p>List of attached files that were successfully retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& AddFiles(AttachedFile&& value) { m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline const Aws::Vector<AttachedFileError>& GetErrors() const{ return m_errors; }

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline void SetErrors(const Aws::Vector<AttachedFileError>& value) { m_errors = value; }

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline void SetErrors(Aws::Vector<AttachedFileError>&& value) { m_errors = std::move(value); }

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& WithErrors(const Aws::Vector<AttachedFileError>& value) { SetErrors(value); return *this;}

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& WithErrors(Aws::Vector<AttachedFileError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& AddErrors(const AttachedFileError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>List of errors of attached files that could not be retrieved. </p>
     */
    inline BatchGetAttachedFileMetadataResult& AddErrors(AttachedFileError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetAttachedFileMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetAttachedFileMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetAttachedFileMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AttachedFile> m_files;

    Aws::Vector<AttachedFileError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
