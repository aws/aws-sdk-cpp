/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/Computer.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results for the <a>CreateComputer</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputerResult">AWS
   * API Reference</a></p>
   */
  class CreateComputerResult
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateComputerResult();
    AWS_DIRECTORYSERVICE_API CreateComputerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API CreateComputerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>Computer</a> object that represents the computer account.</p>
     */
    inline const Computer& GetComputer() const{ return m_computer; }

    /**
     * <p>A <a>Computer</a> object that represents the computer account.</p>
     */
    inline void SetComputer(const Computer& value) { m_computer = value; }

    /**
     * <p>A <a>Computer</a> object that represents the computer account.</p>
     */
    inline void SetComputer(Computer&& value) { m_computer = std::move(value); }

    /**
     * <p>A <a>Computer</a> object that represents the computer account.</p>
     */
    inline CreateComputerResult& WithComputer(const Computer& value) { SetComputer(value); return *this;}

    /**
     * <p>A <a>Computer</a> object that represents the computer account.</p>
     */
    inline CreateComputerResult& WithComputer(Computer&& value) { SetComputer(std::move(value)); return *this;}

  private:

    Computer m_computer;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
