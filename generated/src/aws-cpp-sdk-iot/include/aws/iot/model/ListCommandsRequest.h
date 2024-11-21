﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandNamespace.h>
#include <aws/iot/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListCommandsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListCommandsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCommands"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in this operation. By default, the
     * API returns up to a maximum of 25 results. You can override this default value
     * to return up to a maximum of 100 results for this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCommandsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <code>null</code> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListCommandsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommandsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommandsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command. By default, the API returns all commands that
     * have been created for both <code>AWS-IoT</code> and
     * <code>AWS-IoT-FleetWise</code> namespaces. You can override this default value
     * if you want to return all commands that have been created only for a specific
     * namespace.</p>
     */
    inline const CommandNamespace& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const CommandNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(CommandNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline ListCommandsRequest& WithNamespace(const CommandNamespace& value) { SetNamespace(value); return *this;}
    inline ListCommandsRequest& WithNamespace(CommandNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that can be used to display the list of commands that have a
     * specific command parameter name.</p>
     */
    inline const Aws::String& GetCommandParameterName() const{ return m_commandParameterName; }
    inline bool CommandParameterNameHasBeenSet() const { return m_commandParameterNameHasBeenSet; }
    inline void SetCommandParameterName(const Aws::String& value) { m_commandParameterNameHasBeenSet = true; m_commandParameterName = value; }
    inline void SetCommandParameterName(Aws::String&& value) { m_commandParameterNameHasBeenSet = true; m_commandParameterName = std::move(value); }
    inline void SetCommandParameterName(const char* value) { m_commandParameterNameHasBeenSet = true; m_commandParameterName.assign(value); }
    inline ListCommandsRequest& WithCommandParameterName(const Aws::String& value) { SetCommandParameterName(value); return *this;}
    inline ListCommandsRequest& WithCommandParameterName(Aws::String&& value) { SetCommandParameterName(std::move(value)); return *this;}
    inline ListCommandsRequest& WithCommandParameterName(const char* value) { SetCommandParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to list the commands that you have created in the ascending
     * or descending order. By default, the API returns all commands in the descending
     * order based on the time that they were created.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListCommandsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListCommandsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    CommandNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_commandParameterName;
    bool m_commandParameterNameHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
