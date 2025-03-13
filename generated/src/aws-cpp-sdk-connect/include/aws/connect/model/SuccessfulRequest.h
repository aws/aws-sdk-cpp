/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Request for which contact was successfully created.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuccessfulRequest">AWS
   * API Reference</a></p>
   */
  class SuccessfulRequest
  {
  public:
    AWS_CONNECT_API SuccessfulRequest() = default;
    AWS_CONNECT_API SuccessfulRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SuccessfulRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
    template<typename RequestIdentifierT = Aws::String>
    void SetRequestIdentifier(RequestIdentifierT&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::forward<RequestIdentifierT>(value); }
    template<typename RequestIdentifierT = Aws::String>
    SuccessfulRequest& WithRequestIdentifier(RequestIdentifierT&& value) { SetRequestIdentifier(std::forward<RequestIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    SuccessfulRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
