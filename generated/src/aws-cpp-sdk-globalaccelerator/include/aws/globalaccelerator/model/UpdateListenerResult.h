/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Listener.h>
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
  class UpdateListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateListenerResult();
    AWS_GLOBALACCELERATOR_API UpdateListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information for the updated listener.</p>
     */
    inline const Listener& GetListener() const{ return m_listener; }

    /**
     * <p>Information for the updated listener.</p>
     */
    inline void SetListener(const Listener& value) { m_listener = value; }

    /**
     * <p>Information for the updated listener.</p>
     */
    inline void SetListener(Listener&& value) { m_listener = std::move(value); }

    /**
     * <p>Information for the updated listener.</p>
     */
    inline UpdateListenerResult& WithListener(const Listener& value) { SetListener(value); return *this;}

    /**
     * <p>Information for the updated listener.</p>
     */
    inline UpdateListenerResult& WithListener(Listener&& value) { SetListener(std::move(value)); return *this;}

  private:

    Listener m_listener;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
