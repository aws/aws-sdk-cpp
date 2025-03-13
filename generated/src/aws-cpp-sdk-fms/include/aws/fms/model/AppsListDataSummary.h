/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/App.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of the Firewall Manager applications list.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AppsListDataSummary">AWS
   * API Reference</a></p>
   */
  class AppsListDataSummary
  {
  public:
    AWS_FMS_API AppsListDataSummary() = default;
    AWS_FMS_API AppsListDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AppsListDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline const Aws::String& GetListArn() const { return m_listArn; }
    inline bool ListArnHasBeenSet() const { return m_listArnHasBeenSet; }
    template<typename ListArnT = Aws::String>
    void SetListArn(ListArnT&& value) { m_listArnHasBeenSet = true; m_listArn = std::forward<ListArnT>(value); }
    template<typename ListArnT = Aws::String>
    AppsListDataSummary& WithListArn(ListArnT&& value) { SetListArn(std::forward<ListArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the applications list.</p>
     */
    inline const Aws::String& GetListId() const { return m_listId; }
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }
    template<typename ListIdT = Aws::String>
    void SetListId(ListIdT&& value) { m_listIdHasBeenSet = true; m_listId = std::forward<ListIdT>(value); }
    template<typename ListIdT = Aws::String>
    AppsListDataSummary& WithListId(ListIdT&& value) { SetListId(std::forward<ListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the applications list.</p>
     */
    inline const Aws::String& GetListName() const { return m_listName; }
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }
    template<typename ListNameT = Aws::String>
    void SetListName(ListNameT&& value) { m_listNameHasBeenSet = true; m_listName = std::forward<ListNameT>(value); }
    template<typename ListNameT = Aws::String>
    AppsListDataSummary& WithListName(ListNameT&& value) { SetListName(std::forward<ListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline const Aws::Vector<App>& GetAppsList() const { return m_appsList; }
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }
    template<typename AppsListT = Aws::Vector<App>>
    void SetAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList = std::forward<AppsListT>(value); }
    template<typename AppsListT = Aws::Vector<App>>
    AppsListDataSummary& WithAppsList(AppsListT&& value) { SetAppsList(std::forward<AppsListT>(value)); return *this;}
    template<typename AppsListT = App>
    AppsListDataSummary& AddAppsList(AppsListT&& value) { m_appsListHasBeenSet = true; m_appsList.emplace_back(std::forward<AppsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_listArn;
    bool m_listArnHasBeenSet = false;

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    Aws::String m_listName;
    bool m_listNameHasBeenSet = false;

    Aws::Vector<App> m_appsList;
    bool m_appsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
