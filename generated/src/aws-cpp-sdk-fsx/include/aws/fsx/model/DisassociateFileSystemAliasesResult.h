/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Alias.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>The system generated response showing the DNS aliases that Amazon FSx is
   * attempting to disassociate from the file system. Use the API operation to
   * monitor the status of the aliases Amazon FSx is removing from the file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DisassociateFileSystemAliasesResponse">AWS
   * API Reference</a></p>
   */
  class DisassociateFileSystemAliasesResult
  {
  public:
    AWS_FSX_API DisassociateFileSystemAliasesResult();
    AWS_FSX_API DisassociateFileSystemAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DisassociateFileSystemAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliases = value; }

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliases = std::move(value); }

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline DisassociateFileSystemAliasesResult& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline DisassociateFileSystemAliasesResult& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline DisassociateFileSystemAliasesResult& AddAliases(const Alias& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>An array of one or more DNS aliases that Amazon FSx is attempting to
     * disassociate from the file system.</p>
     */
    inline DisassociateFileSystemAliasesResult& AddAliases(Alias&& value) { m_aliases.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateFileSystemAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateFileSystemAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateFileSystemAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Alias> m_aliases;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
