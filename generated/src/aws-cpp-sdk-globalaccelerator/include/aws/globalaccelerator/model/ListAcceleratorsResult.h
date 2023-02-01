/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/Accelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListAcceleratorsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListAcceleratorsResult();
    AWS_GLOBALACCELERATOR_API ListAcceleratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListAcceleratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline const Aws::Vector<Accelerator>& GetAccelerators() const{ return m_accelerators; }

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline void SetAccelerators(const Aws::Vector<Accelerator>& value) { m_accelerators = value; }

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline void SetAccelerators(Aws::Vector<Accelerator>&& value) { m_accelerators = std::move(value); }

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline ListAcceleratorsResult& WithAccelerators(const Aws::Vector<Accelerator>& value) { SetAccelerators(value); return *this;}

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline ListAcceleratorsResult& WithAccelerators(Aws::Vector<Accelerator>&& value) { SetAccelerators(std::move(value)); return *this;}

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline ListAcceleratorsResult& AddAccelerators(const Accelerator& value) { m_accelerators.push_back(value); return *this; }

    /**
     * <p>The list of accelerators for a customer account.</p>
     */
    inline ListAcceleratorsResult& AddAccelerators(Accelerator&& value) { m_accelerators.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListAcceleratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListAcceleratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline ListAcceleratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Accelerator> m_accelerators;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
