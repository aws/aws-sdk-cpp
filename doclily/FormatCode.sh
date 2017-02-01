#!/usr/bin/env bash

set -e

BASE_DIR=`git rev-parse --show-toplevel`
YAPF_DIR=$BASE_DIR/doclily/deps/yapf
PYTHONPATH=$YAPF_DIR python $YAPF_DIR/yapf -i \
    $BASE_DIR/translate-vitalserver-spec.py
