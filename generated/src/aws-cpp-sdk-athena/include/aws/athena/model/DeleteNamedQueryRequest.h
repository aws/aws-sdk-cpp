/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class DeleteNamedQueryRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API DeleteNamedQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteNamedQuery"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the query to delete.</p>
     */
    inline const Aws::String& GetNamedQueryId() const { return m_namedQueryId; }
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }
    template<typename NamedQueryIdT = Aws::String>
    void SetNamedQueryId(NamedQueryIdT&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::forward<NamedQueryIdT>(value); }
    template<typename NamedQueryIdT = Aws::String>
    DeleteNamedQueryRequest& WithNamedQueryId(NamedQueryIdT&& value) { SetNamedQueryId(std::forward<NamedQueryIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namedQueryId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_namedQueryIdHasBeenSet = true;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
