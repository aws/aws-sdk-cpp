﻿/**
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
   * attempting to associate with the file system. Use the API operation to monitor
   * the status of the aliases Amazon FSx is associating with the file system. It can
   * take up to 2.5 minutes for the alias status to change from <code>CREATING</code>
   * to <code>AVAILABLE</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliasesResponse">AWS
   * API Reference</a></p>
   */
  class AssociateFileSystemAliasesResult
  {
  public:
    AWS_FSX_API AssociateFileSystemAliasesResult();
    AWS_FSX_API AssociateFileSystemAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API AssociateFileSystemAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliases = value; }
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliases = std::move(value); }
    inline AssociateFileSystemAliasesResult& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}
    inline AssociateFileSystemAliasesResult& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}
    inline AssociateFileSystemAliasesResult& AddAliases(const Alias& value) { m_aliases.push_back(value); return *this; }
    inline AssociateFileSystemAliasesResult& AddAliases(Alias&& value) { m_aliases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateFileSystemAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateFileSystemAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateFileSystemAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Alias> m_aliases;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
