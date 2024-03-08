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
    AWS_CONNECT_API SuccessfulRequest();
    AWS_CONNECT_API SuccessfulRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SuccessfulRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline const Aws::String& GetRequestIdentifier() const{ return m_requestIdentifier; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(const Aws::String& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = value; }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(Aws::String&& value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier = std::move(value); }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline void SetRequestIdentifier(const char* value) { m_requestIdentifierHasBeenSet = true; m_requestIdentifier.assign(value); }

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline SuccessfulRequest& WithRequestIdentifier(const Aws::String& value) { SetRequestIdentifier(value); return *this;}

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline SuccessfulRequest& WithRequestIdentifier(Aws::String&& value) { SetRequestIdentifier(std::move(value)); return *this;}

    /**
     * <p>Request identifier provided in the API call in the ContactDataRequest to
     * create a contact.</p>
     */
    inline SuccessfulRequest& WithRequestIdentifier(const char* value) { SetRequestIdentifier(value); return *this;}


    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline SuccessfulRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline SuccessfulRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId of the contact that was created successfully.</p>
     */
    inline SuccessfulRequest& WithContactId(const char* value) { SetContactId(value); return *this;}

  private:

    Aws::String m_requestIdentifier;
    bool m_requestIdentifierHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
