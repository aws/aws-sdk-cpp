/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>An internet service provider (ISP) or network (ASN) in Amazon CloudWatch
   * Internet Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/Network">AWS
   * API Reference</a></p>
   */
  class Network
  {
  public:
    AWS_INTERNETMONITOR_API Network() = default;
    AWS_INTERNETMONITOR_API Network(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the internet service provider (ISP) or network (ASN).</p>
     */
    inline const Aws::String& GetASName() const { return m_aSName; }
    inline bool ASNameHasBeenSet() const { return m_aSNameHasBeenSet; }
    template<typename ASNameT = Aws::String>
    void SetASName(ASNameT&& value) { m_aSNameHasBeenSet = true; m_aSName = std::forward<ASNameT>(value); }
    template<typename ASNameT = Aws::String>
    Network& WithASName(ASNameT&& value) { SetASName(std::forward<ASNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Autonomous System Number (ASN) of the internet provider or network.</p>
     */
    inline long long GetASNumber() const { return m_aSNumber; }
    inline bool ASNumberHasBeenSet() const { return m_aSNumberHasBeenSet; }
    inline void SetASNumber(long long value) { m_aSNumberHasBeenSet = true; m_aSNumber = value; }
    inline Network& WithASNumber(long long value) { SetASNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_aSName;
    bool m_aSNameHasBeenSet = false;

    long long m_aSNumber{0};
    bool m_aSNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
