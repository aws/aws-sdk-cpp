/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline const Aws::Vector<Alias>& GetAliases() const{ return m_aliases; }

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline void SetAliases(const Aws::Vector<Alias>& value) { m_aliases = value; }

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline void SetAliases(Aws::Vector<Alias>&& value) { m_aliases = std::move(value); }

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline AssociateFileSystemAliasesResult& WithAliases(const Aws::Vector<Alias>& value) { SetAliases(value); return *this;}

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline AssociateFileSystemAliasesResult& WithAliases(Aws::Vector<Alias>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline AssociateFileSystemAliasesResult& AddAliases(const Alias& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>An array of the DNS aliases that Amazon FSx is associating with the file
     * system.</p>
     */
    inline AssociateFileSystemAliasesResult& AddAliases(Alias&& value) { m_aliases.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Alias> m_aliases;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
