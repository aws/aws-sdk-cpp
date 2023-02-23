/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/Status.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Options for filtering API keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ApiKeyFilter">AWS
   * API Reference</a></p>
   */
  class ApiKeyFilter
  {
  public:
    AWS_LOCATIONSERVICE_API ApiKeyFilter();
    AWS_LOCATIONSERVICE_API ApiKeyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ApiKeyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline const Status& GetKeyStatus() const{ return m_keyStatus; }

    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline bool KeyStatusHasBeenSet() const { return m_keyStatusHasBeenSet; }

    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline void SetKeyStatus(const Status& value) { m_keyStatusHasBeenSet = true; m_keyStatus = value; }

    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline void SetKeyStatus(Status&& value) { m_keyStatusHasBeenSet = true; m_keyStatus = std::move(value); }

    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline ApiKeyFilter& WithKeyStatus(const Status& value) { SetKeyStatus(value); return *this;}

    /**
     * <p>Filter on <code>Active</code> or <code>Expired</code> API keys.</p>
     */
    inline ApiKeyFilter& WithKeyStatus(Status&& value) { SetKeyStatus(std::move(value)); return *this;}

  private:

    Status m_keyStatus;
    bool m_keyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
