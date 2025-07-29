/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{
  class CreateKeyResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateKeyResult() = default;
    AWS_LOCATIONSERVICE_API CreateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/previous/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CreateKeyResult& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    CreateKeyResult& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API key resource.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    CreateKeyResult& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CreateKeyResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
